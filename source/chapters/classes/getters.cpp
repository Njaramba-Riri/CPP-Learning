#include <iostream>

using namespace std;


/*Getter and settters allow access to
 different attributes and elements of the class. 
*/

class Movie{
    private:
        string rating;
    
    public:
        string title;
        string director;
        int year;

        Movie(string aTitle, string aDirector, string aRating, int aYear){
            title = aTitle;
            director = aDirector;
            setRating(aRating);
            year = aYear;
        }

        void setRating(string aRating){
            if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR"){
                rating = aRating;
            }else{
                rating = "NR";
            }
        }

        string getRating(){
            return rating;
        }
};


int main()
{
    Movie avengers("The Avengers", "Joseph Arthm", "NR", 2017);
    avengers.setRating("PG-13");

    cout << avengers.getRating() << endl;

    return 0;
}
