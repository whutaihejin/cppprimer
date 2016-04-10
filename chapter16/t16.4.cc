#include <iostream>

template <typename T> class QueueItem {
  public:
  QueueItem(const T& item): item_(item), next_(0) {}
  T item_;
  QueueItem* next_;
};

template <typename T> class Queue {
  public:
    Queue(): head_(0), tail_(0) {}
    Queue(const Queue& queue);
    Queue& operator=(const Queue&);
    ~Queue();
    T& front();
    const T& front() const;
    void push(const T&);
    void pop();
    bool empty() const;
    void print() const {
      for (QueueItem<T>* p = head_; p; p = p->next_) {
        std::cout << p->item_ << ' ';
      }
      std::cout << std::endl;
    }
  private:
    QueueItem<T>* head_;
    QueueItem<T>* tail_;
    void distroy();
    void copy(const Queue&);

};

template <typename T> Queue<T>::Queue(const Queue& queue): head_(0), tail_(0) {
  copy(queue);
}

template <typename T> Queue<T>::~Queue() {
  distroy();
}

template <typename T> T& Queue<T>::front() {
  return head_->item_;
}

template <typename T> const T& Queue<T>::front() const {
  return head_->item_;
}

template <typename T> void Queue<T>::push(const T& value) {
  QueueItem<T>* node = new QueueItem<T>(value);
  if (!head_) {
    head_= tail_ = node;
  } else {
    tail_->next_ = node;
    tail_ = node;
  }
}

template <typename T> void Queue<T>::pop() {
  QueueItem<T>* p = head_;
  head_ = head_->next_;
  delete p;
}

template <typename T> bool Queue<T>::empty() const {
  return head_ == 0;
}

template <typename T> void Queue<T>::distroy() {
  while (head_) {
    pop();
  }
  tail_ = 0;
}

template <typename T> void Queue<T>::copy(const Queue& queue) {
  for (QueueItem<T>* p = queue.head_; p; p = p->next_) {
    push(p->item_);
  }
}

template <typename T> Queue<T>& Queue<T>::operator=(const Queue& queue) {
  distroy();
  copy(queue);
}

int main(int argc, char* argv[]) {
  Queue<int> queue;
  queue.push(1);
  queue.push(2);
  queue.push(3);
  queue.push(4);
  queue.print();
  queue.pop();
  queue.print();
  std::cout << "empty=" << queue.empty() << std::endl;
  std::cout << "front=" << queue.front() << std::endl;
  queue.print();
  return 0;
}
