# Write a program that lets the user enter the loan amonut, number os years, ad interest rate, and define a function to calculate monthly EMI, total payments and display the aortization schedule for the loan.

def loan_amortization(monthly_emi, payments, monthly_rate):
    print('Payment\tPrincipal\tInterest\tBalance')

    balance = principal

    for payment in range(1, payments + 1):
        interest = balance * monthly_rate
        principal_paid = monthly_emi - interest
        balance -= principal_paid
        print('%d\t$%.2f\t$%.2f\t\t$%.2f' % (payment, principal_paid, interest, balance))

print('Aortization Schedule Calculator :)')

principal = int(input('Enter the principal amount in $: '))
years = int(input('Enter the total years: '))
rate = float(input('Enter the intresrt rate in %: '))

monthly_rate = rate / (12 * 100)

payments = years * 12

monthly_emi = (principal * monthly_rate) / (1 - (1 + monthly_rate)**(-payments))

total_payment = monthly_emi * payments

print('\nLoan Info:')
print('Monthly EMI: $%.2f' % monthly_emi)
print('Total Payment: $%.2f\n' % total_payment)

print('Amortization Schedule:\n')

loan_amortization(monthly_emi, payments, monthly_rate)