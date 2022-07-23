class Subject
{
    private:

    string message;
    vector<Observer*> observers;
    public:

    Subject()
    {
        message  = "";
    }

    void attach(Oberserver* ob)
    {
        observers.push_back(ob);
    }

    void dettach(Oberserver* ob)
    {
        observers.remove(ob);
    }

    void update_message(string message)
    {
        this->message = message;
        notify();
    }

    void notify()
    {
       for(auto it : observers)
        {
            it->Update(message);
        } 
    }

};

class Observer
{
    private:

    string message;
    Subject* subject;
    public:

    Observer(Subject* subject)
    {
        this->message = "";
        this->subject = subject;
        subject->attach(this);
    }

    ~Observer()
    {
        subject->dettach(this);
    }

    string get_message()
    {
        return message;
    }

    void Update(string& message)
    {
        this->message  = message;
    }
};

int main()
{
    Subject * subject =  new Subject();
    Observer * ob = new Observer(subject);
    Observer * ob1 = new Observer(subject);
    Observer * ob2 = new Observer(subject);
    Observer * ob3 = new Observer(subject);

    subject->update_message("New_World");

    //the message will get updated in alll the observers
}