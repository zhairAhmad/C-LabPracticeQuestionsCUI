# Question 1 
Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a 50 cent toll. Mostly they do, but sometimes a car goes by without paying. The tollbooth keeps track of the number of cars that have gone by, and of the total amount of money collected.

Model this tollbooth with a class called tollBooth. The two data items are a type unsigned int to hold the total number of cars, and a type double to hold the total amount of money collected. A constructor initializes both of these to 0.
 A member function called payingCar() increments the car total and adds 0.50 to the cash total. Another function, called nopayCar(), increments the car total but adds nothing to the cash total. Finally, a member function called display() displays the two totals. Make appropriate member functions const.

Include a program to test this class. This program should allow the user to push one key to count a paying car, and another to count a non_paying car. Pushing the Esc key should cause the program to print out the total cars and total cash and then exit.

# Question 2 
Write a class Time that has three data member hour, minutes and seconds. The class has following member functions:
•	A constructor to initialize the time.
•	Show function to show the time.
•	Overload ++ operator to increase the time by 1 minute.
•	Overload -- operator to decrease the time by 1 minute.

# Question 3
Write a class Distance that has attributes of feet and inches. A constructor with no parameters initializes data members to 0 and 0.0. A member function get() inputs the values and function show() display the values. It has a member function add() that takes an object of type Distance to add the feet and inches of calling object and parameter. Member function add() must be declared inside the class and defined outside the class.

# Question 4
 Write a class Array that contains an array of integers as data member. The class contains the following member functions:

•	A constructor that initializes the array element to -1.
•	Input function to input the values in the array.
•	Show function to display the values of the array.
•	Overload == operator to compare the values of two objects. The overloaded function returns 1 if all the values of both objects are same and returns 0 otherwise.
