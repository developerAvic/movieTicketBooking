

#include <stdio.h>
#include <stdlib.h> // Required for the system() function
#include <string.h>

// Structure for movie details
struct Movie
{
    char title[25]; /* data */
    char genre[10];
    int duration; // in minutes
    float tkt_Price;
};

void displayMovies(struct Movie movies[], int count);

int main()
{
    // Clear the screen at the start
    system("cls");

    int i;
    int movieCount, movieChoice;

    printf("Welcome to Movie Booking System.\n\n");

    // Array of movies
    struct Movie movies[] = {
        {"The Grand Adventure", "Adventure", 120, 124.78},
        {"Mystery of the Shadows", "Mystery", 135, 129.67},
        {"Comedy Central", "Comedy", 110, 150.89},
        {"Space Odyssey", "Sci-Fi", 150, 300.12},
        {"The Haunted Manor", "Horror", 140, 115.34},
        {"Love Across Borders", "Romance", 125, 108.67},
        {"Legends of the Sword", "Fantasy", 160, 205.78},
        {"The Detective Chronicles", "Crime", 130, 175.45},
        {"The Last Frontier", "Adventure", 145, 250.89},
        {"The Time Travelers", "Sci-Fi", 155, 280.34},
        {"Laughter Unlimited", "Comedy", 100, 130.50},
        {"Whispers in the Woods", "Thriller", 135, 140.75},
        {"The Forgotten Realm", "Fantasy", 170, 310.25},
        {"Echoes of the Past", "Mystery", 120, 155.98}};

    movieCount = sizeof(movies) / sizeof(movies[0]);

    displayMovies(movies, movieCount); // Display movies

// Get user's movie choice
retry:
    printf("\nSelect the movie by entering the corresponding number (1-%d): ", movieCount);
    scanf("%d", &movieChoice);

    // Check if the movie choice is valid
    if (movieChoice < 1 || movieChoice > movieCount)
    {
        printf("Invalid movie selection.\n");

        goto retry; // using goto statement incase of wrong input
    }

    return 0;
}

// Function to display the available movies
void displayMovies(struct Movie movies[], int count)
{
    printf("Available movies: \n\n");
    // for (int i = 0; i < count; i++)
    //     printf("\n %d. %-25s\t Genre: %-15s\t Duration: %d mins\t Price per Ticket: $%.2f\n", i + 1, movies[i].title, movies[i].genre, movies[i].duration, movies[i].tkt_Price);

    printf("%-5s %-25s %-15s %-20s %-15s\n", "No.", "Title", "Genre", "Duration (mins)", "Price per Ticket");
    printf("-------------------------------------------------------------------------------\n");

    for (int i = 0; i < count; i++)
    {
        printf("%-5d %-25s %-15s %-20d %.2f\n", i + 1, movies[i].title, movies[i].genre, movies[i].duration, movies[i].tkt_Price);
    }
}

