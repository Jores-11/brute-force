# Variable initialization
product_price = 50
stock_count = 10
discount_threshold = 5
discount_rate = 0.10

# Function to calculate the total price
def calculate_total_price(quantity):    
    if quantity <= 0:
        return "Quantity should be more than zero"  
    total = product_price * quantity  
    if quantity > discount_threshold:
        total = total * (1 - discount_rate)  
    return total

# Main store management function
def store_manager():
    print("Welcome to the store!")
    print("Each product costs:", product_price, "dollars")
    quantity = input("Enter quantity to buy: ")  
    quantity = int(quantity) 
    if quantity > stock_count:
        print("Error: Not enough stock")  
        return
    total_price = calculate_total_price(quantity)
    print("Total price is:", total_price)
    stock_count = stock_count - quantity 
    print("Stock remaining:", stock_count)  

# Loop to keep the store open
while True:
    store_manager()
    continue_shopping = input("Continue shopping? (yes/no): ").lower()
    if continue_shopping == "no":
        break
    elif continue_shopping != "yes":
        print("Invalid response. Please type 'yes' or 'no'.")

print("Thanks for visiting!")