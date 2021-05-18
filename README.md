# Exercises
## Exercise 1
Write a program called `patterns.c`. It should be able to print 2
types of patterns. It should first ask for a type of pattern where you
can enter 1 or 2. Pattern 1 looks like this

    #####
    ####
    ###
    ##
    #

Pattern 2 looks like this
    
        #
       ##
      ###
     ####
    #####
    
After that, it should ask you for the number of rows. Here is pattern
1 with 2, 3, and 4 rows 

2 rows

    ##
    #

3 rows

    ###
    ##
    #

4 rows

    ####
    ###
    ##
    #

Here is pattern 2 with 2, 3, and 4 rows 

2

      #
     ##
     
3
 
       # 
      ##
     ###
4

       # 
      ##
     ###
    ####

**Please make sure that you don't print unnecessary newlines. The tests will fail if you do.**

### Examples

For pattern 1

    $ ./patterns
    Enter type of pattern (1 or 2) 1
    Number of rows 6
    ######
    #####
    ####
    ###
    ##
    #

For pattern 2


     $ ./patterns
     Enter type of pattern (1 or 2) 2
     Number of rows 6
            #
           ##
          ###
         ####
        #####
       ######

### Hints
Here is an output with the spaces replaced by `.` in pattern 2 so that you know how
many spaces to print in each of the patterns


    $ ./patterns
    Enter type of pattern (1 or 2) 2
    Number of rows4
    ...#
    ..##
    .###
    ####




## Exercise 2
Write a program called `pythagorean.c` which will read 3 floating
point numbers from the user and then tell you whether the 3 numbers
are sides of a right triangle.

You can check this by checking whether the sum of the squares of the
smaller two numbers is equal to the square of the largest number.

### Example

3,4,5 are the sides of a right triangle since 3<sup>2</sup>+4<sup>2</sup>=5<sup>2</sup>

    $ ./pythagorean
    side 1 3
    side 2 4
    side 3 5
    Yes


1,2,3 are the *not* the sides of a right triangle since 1<sup>2</sup>+2<sup>2</sup>≠3<sup>2</sup>

     $ ./pythagorean
     side 1 1
     side 2 2
     side 3 3
     No


The order of input doesn't matter. The program will find the largest
number and then check. 3,4,5 are the sides of a right triangle since 3<sup>2</sup>+4<sup>2</sup>=5<sup>2</sup>

     $ ./pythagorean
     side 1 5
     side 2 4
     side 3 3
     Yes
