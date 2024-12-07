# movieTicketBooking
<br>
A simple movie booking program in C language as a mini project.
<br>
<br>
<b>Project Members:</b>
<br>
1. Prem sah <br>
2. Nandeesh <br>
3. Ashi <br>
4. Damodar <br>
<br>

<b>Features of the program:</b><br>


1. Show the available movies with genre and duration<br>
2. Select the movie which the user prefers (could be one or mutiple movie and different price for different movie) <br>
3. Promt the user to tell the name and age of the members<br>
4. Show the available seats<br>
5. Choice to select the seats according to the user choice<br>
6. Ask the user if he is interseted in buying snacks and beverages or he wants to continue with the payment of the tickets<br>
7. Calculate the price of the tickets according to the age of the person<br>
<i>OR</i> <br> 
8. Show the available snacks and beverages <br>
9. Promt the user to enter what he wants to buy and the quantity <br>
10. Display the total bill<br>

<br>
<br>
<b> outline of the program: </b><br>
<br>
<i>1. Start the Program</i></br>
Display a welcome message.</br>
Initialize totalPrice to 0.<br>
<br>
<i>2. Show Available Movies</i></br>
Define a list of movies with attributes:<br>
a. Name<br>
b. Genre<br>
c. Duration<br>
d. Price<br>
Display all movies with their details.<br>
<br>
<i>3. Select Movies</i></br>
Prompt the user to select movies by number.<br>
Repeat until the user enters 0.<br>
<br>
<i>4. Enter Member Details</i></br>
Prompt the user for the number of members (memberCount).<br>
For each member:
Ask for their age and store it in a list.<br>
<br>
<i>5. Show Available Seats</i></br>
Display a predefined seating arrangement <br>
<br>
<i>6. Select Seats</i></br>
Prompt the user for the number of seats to book.<br>
For each seat:
Ask the user to enter a seat number (e.g., "A1").<br>
Mark the seat as booked (if applicable).<br>
<br>


<i>7. Show ticket bill</i><br>
calculate the bill according to the movie selected and the age of person<br>
50% off for children below 10 years <br>
from 11 to 80 full price<br>
from 81 and above 40% off<br>


<i>8. Ask About Snacks</i></br>
Prompt the user: "Do you want to buy any snacks and beverages or continue with payment of ticket?"<br>
If the user says "to buy snacks":
Go to Step 9.<br>
If "not":
Skip to Step 11.<br>
<br>
<i>9. Show Available Snacks</i></br>
Define a list of snacks with attributes:<br>
a. Name<br>
b. Price<br>
Display all snacks with their details.<br>
<br>
<i>10. Select Snacks</i></br>
Repeat until the user enters 0:<br>
Ask the user to select a snack by number.<br>
Prompt for the quantity.<br>
Display the snack cost (price * quantity)<br>
<br>
<i>11. Finalize Payment</i></br>
Display the total price of tickets and snacks.<br>
Thank the user for their purchase.<br>
<br>
<i>12. End the Program</i></br>
<br>
<br>

<b> Structure of the program:</b>


1. *Header Section*
   - Include necessary libraries (e.g., stdio.h, stdlib.h, string.h).
   - Define data structures for movies, snacks, and seats.

2. *Global Variables*
   - Define arrays for available movies and snacks.
   - Initialize variables for tracking total price, selected seats, etc.

3. *Function Declarations*
   - void showMovies() – Display the list of available movies.
   - void selectMovies() – Allow the user to select one or more movies.
   - void getMemberDetails() – Prompt the user for member details (name, age).
   - void showAvailableSeats() – Display the seating arrangement.
   - void selectSeats() – Let the user choose seats.
   - void showSnacks() – Display available snacks and beverages.
   - void selectSnacks() – Let the user select snacks and calculate the cost.
   - void finalizePayment() – Display the total bill and thank the user.

4. *Main Function*
   - Display a welcome message.
   - Call showMovies() to display movies.
   - Call selectMovies() to select movies 
   - Call getMemberDetails() to get user/member details.
   - Call showAvailableSeats() to display available seats.
   - Call selectSeats() to let the user book seats.
   - display and update the ticket bill.
   - Ask the user if they want snacks:
     - If "yes," call showSnacks() and selectSnacks().
   - Call finalizePayment() to display the total cost and conclude.

5. *Function Definitions*
   - Implement each function separately:
     - Use of loops for repeated tasks (e.g., selecting movies, seats, snacks).
     - Use of conditional statements for user choices.
     - Handle input validation where necessary.

6. *End of Program*
   - Return from main() to terminate the program.
