#include <iostream>
#include "Person.h"
using namespace std;

class Movie{
	private:
		string Title;
		string Synopsis;
		string MPAA;
		string Genre;
		Person Director;
		Person Actor;
	
	public:
		Movie(){}
		Movie(string title, string synopsis, string rating, string genre, Person director, Person actor){
			
			Title = title;
			Synopsis = synopsis;
			MPAA = rating;
			Genre = genre;
			Director = director;
			Actor = actor;
		}
		// getters for attributes
		string getTitle(){
			return Title;
		}
		string getSynopsis(){
			return Synopsis;
		}
		string getMPAA(){
			return MPAA;
		}
		string getGenre(){
			return Genre;
		}
		Person getDirector(){
			return Director;
		}
		Person getActor(){
			return Actor;
		}
		// setters for attributes
		void setTitle(string mtitle){
			Title = mtitle;
		}
		void setSynopsis(string msynopsis){
			Synopsis = msynopsis;
		}
		void setMPAA(string rating){
			MPAA = rating;
		}
		void setGenre(string mgenre){
			Genre = mgenre;
		}
		void setDirector(Person mdirector){
			Director = mdirector;
		}
		void setActor(Person mactor){
			Actor = mactor;
		}
};

