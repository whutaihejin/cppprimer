#include <iostream>
#include <set>

class Message;

class Folder {
  public:
    Folder(const std::string& name = "receive"): name_(name) {}
    void AppendMessage(Message*);
    void RemoveMessage(Message*);
  private:
    std::string name_;
    std::set<Message*> message_set_;
};

void Folder::AppendMessage(Message* message) {
  if (message) {
    message_set_.insert(message);
  }
}

void Folder::RemoveMessage(Message* message) {
  if (message) {
    std::set<Message*>::iterator iter = message_set_.find(message);
    if (iter != message_set_.end()) {
      message_set_.erase(iter);
    }
  }
}

class Message {
  public:
    Message(const std::string& content): content_(content) {}
    Message(const Message&);
    Message& operator=(const Message&);
    ~Message();
    void Save(Folder&);
    void Remove(Folder&);
  private:
    // function
    void RemoveMessageFromFolders();
    void AppendMessageToFolders();
    // data members
    std::string content_;
    std::set<Folder*> folder_set_;
};

void Message::RemoveMessageFromFolders() {
  for (std::set<Folder*>::iterator iter = folder_set_.begin(); iter != folder_set_.end(); ++iter) {
    (*iter)->RemoveMessage(this);
  }
}

void Message::AppendMessageToFolders() {
  for (std::set<Folder*>::iterator iter = folder_set_.begin(); iter != folder_set_.end(); ++iter) {
    (*iter)->AppendMessage(this);
  }
}

Message::Message(const Message& message): content_(message.content_), folder_set_(message.folder_set_) {
  AppendMessageToFolders();
}

Message& Message::operator=(const Message& message) {
  if (&message != this) {
    RemoveMessageFromFolders();
    content_ = message.content_;
    folder_set_ = message.folder_set_;
    AppendMessageToFolders();
  }
}

Message::~Message() {
  RemoveMessageFromFolders();
}

void Message::Save(Folder& folder) {
  folder_set_.insert(&folder);
  folder.AppendMessage(this);
}

void Message::Remove(Folder& folder) {
  std::set<Folder*>::iterator iter = folder_set_.find(&folder);
  if (iter != folder_set_.end()) {
    folder_set_.erase(iter);
  }
  folder.RemoveMessage(this);
}

int main(int argc, char* argv[]) {
  Folder folder;
  Message message("Hi, taihejin");
  message.Save(folder);
  Message m2("Hi, weibo");
  m2.Save(folder);
  Message m3 = m2;
  m3.Save(folder);
  m3 = message;
  return 0;
}
