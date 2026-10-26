balance = 3000

def buy_things(item,price):
    global balance 
    balance=balance - price

buy_things('dream',1000)
print(balance) 