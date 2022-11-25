#include <iostream>

class Animal
{
	protected:
		int id;
		std::string name;
        std::string m_color;
        std::string m_breed;
        std::string m_feed;
        std::string m_sound;
};

class Dog : public Animal 
{	
	public:
		virtual void info()
        {
	       m_feed = "My dog eats grass";
 		   m_sound = "My dog sound is haf՛ haf՛";
           id = 12548;
           name = "Ricky";
           std::cout << name << " id is: " << id << " name is " << name << std::endl;
           m_breed = "shpic";
           m_color = "white";
		}	
		void setterMyDog(std::string color, std::string breed)
		{
			m_color = color;
			m_breed = breed;
		}
		void getterMyDog()
		{
			std::cout << "My dog color is: " << m_color << std::endl;
			std::cout << "My dog breed is: " << m_breed << std::endl;
		}
       void toFeed()
       {
			 std::cout << m_feed << std::endl;
       }   
       void makeSound()
       {
   			 std::cout << m_sound << std::endl;

       }  
};

class Cat : public Animal
{
	public:
		void info()
        {
		   m_feed = "My cat eats fish";
		   m_sound = "My cat sound is miau miau";
           id = 12344;
           name = "Kika";
		   std::cout << name << " id is: " << id << " name is " << name << std::endl;
       	   m_breed = "Vana";
       	   m_color = "Blue";
		}
        void setterMyDog(std::string color, std::string breed)
		{
             m_color = color;
             m_breed = breed;
        }
        void getterMyDog()
		{
             std::cout << "My dog color is: " << m_color << std::endl;
             std::cout << "My dog breed is: " << m_breed << std::endl;
        }
		void toFeed()
		{
			std::cout << m_feed << std::endl;
		}
		void makeSound()
		{
			std::cout << m_sound << std::endl;
		}
};
int main()
{
	Dog resultDog;
	resultDog.info();
	resultDog.getterMyDog();
	resultDog.toFeed();
	resultDog.makeSound();
	Cat resultCat;
	resultCat.info();
	resultCat.getterMyDog();
	resultCat.toFeed();
	resultCat.makeSound();
	return 0;
}
