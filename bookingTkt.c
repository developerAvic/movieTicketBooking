

#include<stdio.h>


//Structure for movie details
struct Movie
{
    char title[50];   /* data */
    char genre[20];
    int duration; // in minutes
    float tkt_Price;
};

void displayMovies(struct Movie movies[],int count);

int main()
{
int i;
printf("Welcome to Movie Booking System.\n\n");

struct Movie movies[] = {
    {"The Grand Adventure", "Adventure", 120,124.78},
    {"Mystery of the Shadows", "Mystery", 135,129.67},
    {"Comedy Central", "Comedy", 110,150.89},
    {"Space Odyssey", "Sci-Fi", 150,300.12}
};
int movieCount = sizeof(movies) / sizeof(movies[0]);

    displayMovies(movies, movieCount);  // Display movies

return 0;
}


//Function to display the available movies
void displayMovies(struct Movie movies[],int count) {
    printf("Available movies: \n\n");
    for (int i =0;i<count;i++)
        printf("%d. %s \n -> Genre: %s, Duration: %d mins, Price per Ticket: %.2f \n\n", i + 1, movies[i].title, movies[i].genre, movies[i].duration, movies[i].tkt_Price);
}


