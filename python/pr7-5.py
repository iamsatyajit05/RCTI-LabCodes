# Write a program to repeatedly prompt the user to enter the capital of a state. Upon receiving the user’s input, the program reports whether the answer is correct. Assume the states and their capitals are stored in dictionaries as key value pairs.

indian_states_and_capitals = {
    "Andhra Pradesh": "Amaravati",
    "Arunachal Pradesh": "Itanagar",
    "Assam": "Dispur",
    "Bihar": "Patna",
    "Chhattisgarh": "Raipur",
    "Goa": "Panaji",
    "Gujarat": "Gandhinagar",
    "Haryana": "Chandigarh",
    "Himachal Pradesh": "Shimla",
    "Jammu and Kashmir": "Srinagar/Jammu",
    "Jharkhand": "Ranchi",
    "Karnataka": "Bengaluru",
    "Kerala": "Thiruvananthapuram",
    "Madhya Pradesh": "Bhopal",
    "Maharashtra": "Mumbai",
    "Manipur": "Imphal",
    "Meghalaya": "Shillong",
    "Mizoram": "Aizawl",
    "Nagaland": "Kohima",
    "Odisha": "Bhubaneswar",
    "Punjab": "Chandigarh",
    "Rajasthan": "Jaipur",
    "Sikkim": "Gangtok",
    "Tamil Nadu": "Chennai",
    "Telangana": "Hyderabad",
    "Tripura": "Agartala",
    "Uttarakhand": "Dehradun",
    "Uttar Pradesh": "Lucknow",
    "West Bengal": "Kolkata",
}

for state in indian_states_and_capitals.keys():
    capital = input(f"\nWhat is the capital of {state}? ")

    # Check if the answer is correct
    if capital == indian_states_and_capitals[state]:
        print("Correct!")
    else:
        print(f"Incorrect, The capital of {state} is {indian_states_and_capitals[state]}.")