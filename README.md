# Numeric Data Modification Tool 

A data application focused on digit manipulation, arithmetic analysis, and entry validation.

##  Project overview
Developed in C, this application processes data and does a performing algorithmic operations to isolate information, and reconstructing it.

## Technologies and concepts used
- **Language:** C (Programming Language)
- **Tools:** Dev-C++
- **Concepts:** mathematical operators (`%` and `/`), input validation, error loops

##  Implementation
* **Arithmetic analysis:** applied algorithmic logic utilizing mathematical operators (`%` modulo and `/` division) to mathematically isolate single digits from a integer.
* **Data recomposition:** implemented reverse arithmetic logic to separate individual data pieces back into a four-digit integer.
* **Entry validation:** applied validation architectures and error loops to reject invalid data formats, forcing the program to accept only acceptable data.

##  How it works 
The program isolates digits using operators:
- **Isolation:** `digit = total % 10;` to capture the last unit, and `total = total / 10;` to shift left.
- **Recomposition:** combines parts by scaling positions (e.g., `(d1 * 1000) + (d2 * 100) + ...`).
