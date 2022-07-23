class Singleton
{
    int value;
    static Singleton* instance;
    static std::mutex mutex_;
    Singleton()
    {
        value = 0;
    }

    public: 

    Singleton* get_instance()
    {
        std::lock_guard<mutex_t> lock(mutex_);

        if(instance == nullptr)
        {
            instance = new Singleton();
        }

        return instance;
    }
}