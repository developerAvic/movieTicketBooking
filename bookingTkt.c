#include <stdio.h>
#include <stdlib.h> // Required for the system() function
#include <string.h>

// Structure for movie details
struct Movie
{
    char title[25];
    char genre[10];
    int duration; // in minutes
    float tkt_Price;
    char date[15]; // For storing the date
    char time[10]; // For storing the time
};

// Function declarations
void displayScheduledMovies(struct Movie movies[], int count);
void displayUnscheduledMovies(struct Movie movies[], int count);

int main()
{
    // Clear the screen at the start
    system("cls");

    int movieCount, movieChoice;
    char choice;

    printf("Welcome to Movie Booking System.\n\n");

    // Array of movies
    struct Movie movies[] = {
        {"The Grand Adventure", "Adventure", 120, 124.78, "Dec 10", "10:00 AM"},
        {"Mystery of the Shadows", "Mystery", 135, 129.67, "Dec 10", "01:00 PM"},
        {"Comedy Central", "Comedy", 110, 150.89, "Dec 10", "04:00 PM"},
        {"Space Odyssey", "Sci-Fi", 150, 300.12, "Dec 10", "07:00 PM"},
        {"The Haunted Manor", "Horror", 140, 115.34, "Dec 11", "10:00 AM"},
        {"Love Across Borders", "Romance", 125, 108.67, "Dec 11", "01:30 PM"},
        {"Legends of the Sword", "Fantasy", 160, 205.78, "Unscheduled", "Unscheduled"},
        {"The Detective Chronicles", "Crime", 130, 175.45, "Unscheduled", "Unscheduled"},
        {"The Last Frontier", "Adventure", 145, 250.89, "Unscheduled", "Unscheduled"},
        {"The Time Travelers", "Sci-Fi", 155, 280.34, "Unscheduled", "Unscheduled"},
        {"Laughter Unlimited", "Comedy", 100, 130.50, "Unscheduled", "Unscheduled"},
        {"Whispers in the Woods", "Thriller", 135, 140.75, "Unscheduled", "Unscheduled"},
        {"The Forgotten Realm", "Fantasy", 170, 310.25, "Unscheduled", "Unscheduled"},
        {"Echoes of the Past", "Mystery", 120, 155.98, "Unscheduled", "Unscheduled"},
        {"The Enchanted Forest", "Fantasy", 150, 220.00, "Unscheduled", "Unscheduled"},
        {"Dark Waters", "Thriller", 140, 200.50, "Unscheduled", "Unscheduled"},
        {"The Last Laugh", "Comedy", 130, 190.75, "Unscheduled", "Unscheduled"}};

    movieCount = sizeof(movies) / sizeof(movies[0]);

    do
    {
        displayScheduledMovies(movies, movieCount);   // Display scheduled movies
        displayUnscheduledMovies(movies, movieCount); // Display unscheduled movies

        // Get user's movie choice
    retry:
        printf("\nSelect a scheduled movie by entering the corresponding number (1-%d): ", movieCount);
        scanf("%d", &movieChoice);

        // Check if the movie choice is valid
        if (movieChoice < 1 || movieChoice > movieCount)
        {
            printf("Invalid movie selection. Please try again.\n");
            goto retry; // Retry on invalid input
        }

        // Check if the selected movie is unscheduled
        if (strcmp(movies[movieChoice - 1].date, "Unscheduled") == 0)
        {
            printf("Sorry, you cannot book an unscheduled movie. Please choose a scheduled movie.\n");
            goto retry; // Retry if unscheduled movie is selected
        }

        // Display the selected movie's details
        printf("\nYou selected: %s (%s at %s)\n",
               movies[movieChoice - 1].title,
               movies[movieChoice - 1].date,
               movies[movieChoice - 1].time);

        // Ask if the user wants to book another movie
        printf("\nDo you want to book another movie? (Y/N): ");
        scanf(" %c", &choice); // Note the space before %c to avoid newline issues

    } while (choice == 'Y' || choice == 'y');

    printf("\nThank you for using the Movie Booking System. Enjoy your movies!\n");
    return 0;
}

// Function to display the scheduled movies
void displayScheduledMovies(struct Movie movies[], int count)
{
    printf("Scheduled Movies:\n");
    printf("%-5s %-25s %-15s %-20s %-20s %-15s %-10s\n", "No.", "Title", "Genre", "Duration (mins)", "Price per Ticket", "Date", "Time");
    printf("-------------------------------------------------------------------------------------------------------------\n");

    for (int i = 0; i < count; i++)
    {
        if (strcmp(movies[i].date, "Unscheduled") != 0)
        {
            printf("%-5d %-25s %-15s %-20d %-20.2f %-15s %-10s\n",
                   i + 1, movies[i].title, movies[i].genre, movies[i].duration, movies[i].tkt_Price, movies[i].date, movies[i].time);
        }
    }
}

// Function to display the unscheduled movies
void displayUnscheduledMovies(struct Movie movies[], int count)
{
    printf("\nUpcoming Movies (Not Available for Booking):\n");
    printf("%-5s %-25s %-15s %-20s %-20s %-15s %-10s\n", "No.", "Title", "Genre", "Duration (mins)", "Price per Ticket", "Date", "Time");
    printf("-------------------------------------------------------------------------------------------------------------\n");

    for (int i = 0; i < count; i++)
    {
        if (strcmp(movies[i].date, "Unscheduled") == 0)
        {
            printf("%-5d %-25s %-15s %-20d %-20.2f %-15s %-10s\n",
                   i + 1, movies[i].title, movies[i].genre, movies[i].duration, movies[i].tkt_Price, "Unscheduled", "Unscheduled");
        }
    }
}