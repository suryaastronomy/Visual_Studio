#include<stdio.h>
#include<math.h>

int main() {
    FILE *fp_in, *fp_out; // Input and output files
    double a, b, c, discriminant, root1, root2; // Variables for coefficients, discriminant, and roots
    int i, num_eq = 3; 

    fp_in = fopen("Problem_1.txt", "r"); // Open input file for reading
    fp_out = fopen("output.txt", "w"); // Open output file for writing

    for (i = 0; i < num_eq; i++) { // Loop through each equation
        fscanf(fp_in, "%lf %lf %lf", &a, &b, &c); 
        discriminant = b * b - 4 * a * c;

        if (discriminant > 0) { // If discriminant is positive
            root1 = (-b + sqrt(discriminant)) / (2 * a); // Calculate first root
            root2 = (-b - sqrt(discriminant)) / (2 * a); // Calculate second root
            fprintf(fp_out, "Equation %d: There are two Roots: %.2lf, %.2lf\n", i + 1, root1, root2); // Write roots to output file
        }
        else if (discriminant == 0) { // If discriminant is zero
            root1 = root2 = -b / (2 * a); // Calculate the single root
            fprintf(fp_out, "Equation %d: There is one root: %.2lf\n", i + 1, root1); // Write the single root to output file
        }
        else { // If discriminant is negative
            fprintf(fp_out, "Equation %d: There are no real roots\n", i + 1); 
        }
    }

    fclose(fp_in); // Close input file
    fclose(fp_out); // Close output file

    printf("Roots have been calculated and written to output.txt\n"); // Print confirmation message
    return 0;
}