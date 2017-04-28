#ifndef EGG_H
#define EGG_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

//Base class for the tamagotchis
class Egg {
private:
	//0-5 Baby, 6-10 Kid, 11-16 Teen, 17-22 Adult, 23+ Final Form
	// Put age in big while loop (age = actions)
	int age;
	float weight;
	int happiness;
	int hunger;
	int feed_count;
	int poop_count;
	bool sick;
	// Put sick_count in big while loop with age with if statement for
	// 	if (sick == true)
	// 		sick_count++;
	int sick_count;
	int med_count;
	std::string name;
	bool death;

public:
	Egg(std::string n): age(0), weight(1.0), happiness(0), 
		hunger(0), feed_count(0), poop_count(0), sick(false), 
		sick_count(0),med_count(0), name(n), death(false) {} 

	Egg(int a, float w, int hap, int h, int f_count, int poop, bool s, 
		int s_count, int m_count, std::string n, bool d): 
	
		age(a), 
		weight(w), 
		happiness(hap), 
		hunger(h), 
		feed_count(f_count), 
		poop_count(poop), 
		sick(s), 
		sick_count(s_count),
	       	med_count(m_count),	
		name(n),
		death(d) {} 

	int get_age() {return age;}
	void set_age(int a){age = a;}
	void inc_age(){age += 1;}

	float get_weight() {return weight;}
	void set_weight(float w) {weight = w;}

	int get_happiness() {return happiness;}
	void set_happiness(int a) {happiness = a;}
	void inc_happiness(){
		if(happiness<4){
			happiness += 1;
		}
	}

	int get_hunger() {return hunger;}
	void set_hunger(int a) {hunger = a;}
	void inc_hunger(){
		if(hunger < 4){
			starving = 0;
			hunger += 1;
		} else if(hunger == 0){
			starving += 1;
		}
	}

	int get_feed() {return feed_count;}
	void set_feed(int f) {feed_count = f;}
	void inc_feed(){feed_count += 1;}

	int get_poop() {return poop_count;}
	void set_poop(int a){poop_count = a;}
	void inc_poop(){poop += 1;}

	std::string get_name() {return name;}
	void set_name(std::string a){name = a;}

	bool get_sick() {return sick;}
	void set_sick(bool s) {sick = s;}
	void make_sick(){
		if(sick == false){
			sick == true;
		}
	}
	void make_better{
		if(sick == true {
			sick == false;
		}
	}

	int get_sick_count() {return sick_count;}
	void set_sick_count(int s) {sick_count = s;}
	void inc_sick_count() {sick_count += 1;}

	int get_med_count() {return med_count;}
	void set_med_count(int m) {med_count = m;}
	void inc_med_count(){med_count += 1;}

	bool get_death() {return death;}
	void set_death(bool d) {death = d;}


	void feed();
	void poop_check();
	void medicine();
	void clean();
	void light();
	void display_info();
	virtual void display();





};


#endif //EGG_H
