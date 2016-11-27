// Example program #1 from Chapter 12 of Absolute Beginner's Guide
// to C, 3rd Edition
// File Chapter12ex1.c
/* This program defines a series of variables and expressions and then uses both
relational and logical operators to test them against each other. */

#include <stdio.h>

int main()
{
  // set up some common integers for the program
  int planets = 8;
  int friends = 6;
  int potterBooks = 7;
  int starWars =  6;
  int months = 12;
  int beatles = 4;
  int avengers = 6;
  int baseball = 9;
  int basketball = 5;
  int football = 15;

// This first logical statement uses the AND operator to test
// whether the cast of Friends and the Beatles would have
// enough people to make a baseball team AND the cast
// of Friends and the Avengers would have enough people
// to field a football team. If so, the statements will print.
// the AND operator is: &&

// TODO: Make the print statement that confirms whether or not the cast of Friends and the Beatles have enough people
  // to make a baseball team
// TODO: Make the print statement that confirms whether or not the cast of Friends and the Avengers have enough people
  // to make a football team

//My wrong code: if ((friends) && (beatles) == baseball)
// Correct code:

if ((friends + beatles >= baseball) && (friends + avengers >= football))
  {
    printf("The cast of Friends and the Beatles could make a baseball team.\n");
    printf("AND the cast of Friends and the Avengers could make a football team.\n");
  }

else
  {
    printf("Either the friends cannot make a baseball team with the Beatles.\n");
    printf("Or they can't make a football team  with the Avengers.\n");
  }

// This second logical statement uses the OR operator to test
// whether the number of Star Wars movies is less than months
// in the year OR the number of Harry Potter books is less than
// months in the year. If either statement is true,
// the statements will print.
// the OR operator is: ||

if ((starWars <= months) || (potterBooks < months))
  {
    printf("You could watch one Star Wars film per month.\n");
    printf("OR you could read a Harry Potter book per month.\n");
  }
else
  {
    printf(" Neither can happen--too many books or movies,\n");
    printf(" Not enough time!\n\n");
  }


// This final logical statemnt uses the NOT operator to test
// whether the number of baseball players on a team added
// to the number of basketball players on a team is NOT
// greater than the number of football players on
// a team. If so, the statements will print.

// wrong code: if ((baseball + basketball) !> (football))
if (!(baseball + basketball > football))
  {
    printf("The football team is the biggest team hands down!\n");
  }
else
  {
    printf("There are more baseball and basketball players combined than the football team.\n");
  }

  return 0;
}
