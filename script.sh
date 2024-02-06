#!/bin/bash

# Create directories for Chapter 1
mkdir -p "1_An_Overview_Of_C++"/{C++_and_Quantitative_Finance,The_Components_of_C++,Some_New_Features_since_C++11,Mathematical_Operators_Functions_and_Constants_in_C++,Naming_Conventions,Summary,References}

# For sections with "Show More Items", create a placeholder directory
mkdir -p "1_An_Overview_Of_C++"/{C++_and_Quantitative_Finance/More_Items,The_Components_of_C++/More_Items,Some_New_Features_since_C++11/More_Items,Mathematical_Operators_Functions_and_Constants_in_C++/More_Items}

# Create directories for Chapter 2
mkdir -p "2_User-Defined_Classes"/{Introduction,A_Black-Scholes_Class,Move_Semantics_and_Special_Class_Functions,The_Three-Way_Comparison_Operator,Lambda_Expressions_and_User-Defined_Class_Members,Summary,References}

# Placeholder for "Show More Items"
mkdir -p "2_User-Defined_Classes"/{A_Black-Scholes_Class/More_Items,Move_Semantics_and_Special_Class_Functions/More_Items}

# Create directories for Chapter 3
mkdir -p "3_Smart_Pointers_Class_Inheritance_And_Polymorphism"/{Introduction,Polymorphism_A_Review_in_a_Modernized_Context,Handling_Polymorphic_Member_Resources_with_Raw_Pointers,Introducing_Smart_Pointers,Replacing_Raw_Pointers_with_Unique_Pointers_in_Class_Design,Summary,References}

# Placeholder for "Show More Items"
mkdir -p "3_Smart_Pointers_Class_Inheritance_And_Polymorphism"/{Handling_Polymorphic_Member_Resources_with_Raw_Pointers/More_Items,Introducing_Smart_Pointers/More_Items,Replacing_Raw_Pointers_with_Unique_Pointers_in_Class_Design/More_Items}

# Create directories for Chapter 4
mkdir -p "4_Dates_And_Fixed_Income_Securities"/{Introduction,Representation_of_a_Date,A_Date_Class_Wrapper,Day_Count_Bases,Yield_Curves,A_Bond_Class}

# Placeholder for "Show More Items"
mkdir -p "4_Dates_And_Fixed_Income_Securities"/{Representation_of_a_Date/More_Items,A_Date_Class_Wrapper/More_Items,Yield_Curves/More_Items}

# Create directories for Chapter 5
mkdir -p "5_Linear_Algebra"/{Introduction,valarray_and_Matrix_Operations,Eigen,Future_Directions_Linear_Algebra_in_the_Standard_Library,Chapter_Summary,References}

# Placeholder for "Show More Items"
mkdir -p "5_Linear_Algebra"/{valarray_and_Matrix_Operations/More_Items,Eigen/More_Items,Future_Directions_Linear_Algebra_in_the_Standard_Library/More_Items}

# Create directories for Chapter 6
mkdir -p "6_The_Boost_Libraries"/{Introduction,Mathematical_Constants,Statistical_Distributions,MultiArray,Conclusion,References}

# Placeholder for "Show More Items"
mkdir -p "6_The_Boost_Libraries"/{Statistical_Distributions/More_Items,MultiArray/More_Items}

# Add .gitkeep to every directory to ensure they are pushed to Git
find . -type d -exec touch {}/.gitkeep \;

echo "Folder structure for 'Learning Modern C++ for Finance' created successfully."
