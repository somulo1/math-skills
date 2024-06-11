# Data Analysis Project

This project aims to analyze a group of integers stored in a text file (.txt). It calculates the mean, median, variance, and standard deviation of the integers.

## Usage

Compile the project using a C compiler, such as GCC:

```bash
gcc main.c mean.c median.c variance.c standard_deviation.c -o data_analysis
```

## Files

    main.c: The main file responsible for reading the data file and calling the analysis ##functions.
    mean.c: Contains the function to calculate the mean of the data.
    median.c: Contains the function to calculate the median of the data.
    variance.c: Contains the function to calculate the variance of the data.
    standard_deviation.c: Contains the function to calculate the standard deviation of the data.
    helpers.h: Header file containing function prototypes and necessary includes.



##Test Cases

   ### Case 1: Test with positive integers: data.txt contains 1 2 3 4 5
        Expected Mean: 3.00
        Expected Median: 3.00
        Expected Variance: 2.50
        Expected Standard Deviation: 1.58

  ###  Case 2: Test with negative integers: data.txt contains -3 -2 -1 0 1 2 3
        Expected Mean: 0.00
        Expected Median: 0.00
        Expected Variance: 4.00
        Expected Standard Deviation: 2.00

   ### Case 3: Test with a mix of positive and negative integers: data.txt contains -10 -5 0 5 10
        Expected Mean: 0.00
        Expected Median: 0.00
        Expected Variance: 33.33
        Expected Standard Deviation: 5.77
        
##  Author

 * gitea account [samuel omulo](https://learn.zone01kisumu.ke/git/somulo/math-skills.git)
 * github account [samuel omulo](https://github.com/somulo1)
 

