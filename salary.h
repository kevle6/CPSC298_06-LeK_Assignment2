#ifndef SALARY_H
#define SALARY_H

/* Function calcBonus returns the annual bonus of an employee using base salary (double)
 and years of experience (integer). Returns annual bonus as a double. */

double calcBonus(double baseSalary, int yearsExperience) {
  double annualBonus;
  if (yearsExperience > 20) { // Years of experience is greater than 20.
    annualBonus = baseSalary * 0.05; // 5% bonus.
  }
  else if (yearsExperience > 10) { // Years of experience greater than 10, less than 20.
    annualBonus = baseSalary * 0.03; // 3% bonus.
  }
  else { // Years of experience less than 10.
    annualBonus = baseSalary * 0.02; // 2% bonus.
  }
  return annualBonus;
}

#endif
