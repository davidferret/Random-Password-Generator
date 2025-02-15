# Strong Password Generator

This is a C project which generates strong, randomized passwords between 8 and 32 characters. The passwords generatued use uppercase and lowercase letters, numbers, and special characters, making it ideal for improving password security. I used a seeded random number generator to ensure each password is unique and unpredictable. Input validation was also a key feature, ensuring that you enter a valid length within the allowed range before generating a password. As someone who has had my accounts hacked before, I built this project because I wanted a simple but effective way to generate strong passwords without relying on external tools. It was interesting to work with character sets and randomness to create something practical for everyday security needs. Hopefully, this helps you generate secure passwords easily and keeps your accounts safer!

## Example Output
```
Enter desired password length (minimum 8, max 32): 12
Generated Strong Password: Xz$8v!Yp@k3L

Do you want to generate another password? (y/n): y
Enter desired password length (minimum 8, max 32): 16
Generated Strong Password: a9&Kz@TpLq1#Xy$

Do you want to generate another password? (y/n): n
```
