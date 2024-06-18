#include <iostream>
#include <string>
#include "Movie.h"

using namespace std;

int main() {
    // variables for input
    string m_title, synop, mpaa_rating, m_genre;
    string dfname, dlname, afname, alname;
    char g;
    char add_more_director, add_more_actor;

    // description of the program
    cout << "PROGRAMMING EXERCISE 06\t" << endl;
    cout << "Object Oriented Programming (Activity 3)" << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "\tThis program will store and display movie information inputted by the user demonstrating principles of OOP.\n\tOverall, this program illustrates creation, initialization, and usage of class objects,\n\tas well as the interaction between different classes in C++" << endl;
    cout << "\t\nProgrammed by: John Andrei S. Manalo" << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------" << endl;

    Movie movie;

    // user input for movie details
    cout << "Enter Movie Title: ";
    getline(cin, m_title);
    movie.setTitle(m_title);

    cout << "\nEnter Synopsis: ";
    getline(cin, synop);
    movie.setSynopsis(synop);

    cout << "\nWhat is its MPAA Rating: ";
    getline(cin, mpaa_rating);
    movie.setMPAA(mpaa_rating);

    cout << "\nWhat is the Genre: ";
    getline(cin, m_genre);
    movie.setGenre(m_genre);

    // Director input
    Person directors[10]; // Array to store directors, assuming a maximum of 10 directors
    int num_directors = 0; // Counter to keep track of the number of directors

    do {
        cout << "\nWho is the Director: ";
        cout << ("\n\tEnter the First Name: ");
        getline(cin, dfname);
        cout << ("\n\tEnter the Last Name: ");
        getline(cin, dlname);
        while (true) {
            cout << "\n\tEnter the Gender (M/F): ";
            if (!(cin >> g)) {
                cout << "\n\tInvalid input! Please try again." << endl;
                cin.clear();
                cin.ignore(10000, '\n');
            } else if (g == 'M' || g == 'F' || g == 'm' || g == 'f') {
                break;
            } else {
                cout << "\n\tInvalid input! Please enter 'M' for Male or 'F' for Female." << endl;
                cin.clear();
                cin.ignore(10000, '\n');
            }
        }
        cin.ignore(10000, '\n');
        Person director(dfname, dlname, g);
        directors[num_directors++] = director;

        cout << "\nDo you want to add another director? (Y/N): ";
        cin >> add_more_director;
        cin.ignore(10000, '\n'); // Clear input buffer
    } while (add_more_director == 'Y' || add_more_director == 'y');

    // Actor input
    Person actors[50]; // Array to store actors assuming 50 actors
    int num_actors = 0; // Counter to keep track of the number of actors

    do {
        cout << "\nWho is the main Actor/Actress: ";
        cout << ("\n\tEnter the First Name: ");
        getline(cin, afname);
        cout << ("\n\tEnter the Last Name: ");
        getline(cin, alname);
        while (true) {
            cout << "\n\tEnter the Gender (M/F): ";
            if (!(cin >> g)) {
                cout << "\n\tInvalid input! Please try again." << endl;
                cin.clear();
                cin.ignore(10000, '\n');
            } else if (g == 'M' || g == 'F' || g == 'm' || g == 'f') {
                break;
            } else {
                cout << "\n\tInvalid input! Please enter 'M' for Male or 'F' for Female." << endl;
                cin.clear();
                cin.ignore(10000, '\n');
            }
        }
        cin.ignore(10000, '\n');
        Person actor(afname, alname, g);
        actors[num_actors++] = actor;

        cout << "\nDo you want to add another actor/actress? (Y/N): ";
        cin >> add_more_actor;
        cin.ignore(10000, '\n'); // Clear input buffer
    } while (add_more_actor == 'Y' || add_more_actor == 'y');

    // Output the movie details
    cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "MOVIE DETAILS" << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "Movie Title: " << movie.getTitle() << endl;
    cout << "\nSynopsis: " << movie.getSynopsis() << endl;
    cout << "\nMPAA Rating: " << movie.getMPAA() << endl;
    cout << "\nGenre: " << movie.getGenre() << endl;

    // Output the director details
    cout << "\nDirector/s:" << endl;
    for (int i = 0; i < num_directors; ++i) {
        cout << directors[i].getFirstName() << " " << directors[i].getLastName() << " (" << directors[i].getGender() << ")" << endl;
    }

    // Output the actors details
    cout << "\nActor(s)/Actress(es):" << endl;
    for (int i = 0; i < num_actors; ++i) {
        cout << actors[i].getFirstName() << " " << actors[i].getLastName() << " (" << actors[i].getGender() << ")" << endl;
    }

    return 0;
}
