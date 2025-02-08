import random

def generate_expression(depth):
    if depth == 0:
        return str(random.randint(1, 10))  # Base case: return a number
    else:
        # Choose a random operation
        operation = random.choice(['+', '*', '%'])
        left = generate_expression(depth - 1)
        right = generate_expression(depth - 1)
        return f"({left} {operation} {right})"

def solve_problem():
    expression = generate_expression(3)
    result = eval(expression)  # Evaluate the generated expression
    print(f"Solved: {expression} = {result}")  # Print the expression and result
    return result

def main():
    results = []
    for _ in range(5):
        result = solve_problem()
        results.append(result)
    
    # Assuming all results must be stored or checked
    if all(results):  # Placeholder for success criteria
        # Write the flag to a file
        with open("/flag", "w") as flag_file:
            flag_file.write("Challenge solved! Flag: <your_flag_here>")
        print("All problems solved successfully!")

if __name__ == "__main__":
    main()
