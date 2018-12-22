class Singleton {
	Singleton();
	public:
	static Singleton* ptr;
	~Singleton();
	void showDetails();
	static Singleton* createInstance();
};
