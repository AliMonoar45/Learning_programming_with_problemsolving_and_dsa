class Bank:

    def __init__(self, balance):
        self.balance = balance
        self.min_withdraw = 100
        self.max_withdraw = 100000

    def get_balance(self):
        return self.balance

    def diposit(self, amount):
        if amount > 0:
            self.balance += amount

    def withdraw(self, amount):
        if amount < self.min_withdraw:
            print(f"you can not withdraw bellow {self.min_withdraw}")
        elif amount > self.max_withdraw:
            print(f"you can not withdraw more than {self.max_withdraw}")
        elif amount > self.balance:
            print(f"you have {self.balance}")
        else:
            self.balance -= amount
            print(f"here is your money {amount}. you curr have {self.get_balance()}")


brack = Bank(15000)
brack.withdraw(25)
brack.withdraw(2500000)
brack.withdraw(1000)

# ── Example 1: Alice's account ───────────────────────────────────────────────
print("\n--- Alice's Account ---")
alice = Bank(50000)
print("Balance:", alice.get_balance())
alice.diposit(10000)
print("After deposit 10000:", alice.get_balance())
alice.withdraw(5000)
alice.withdraw(80)          # below minimum
alice.withdraw(200000)      # above maximum
alice.withdraw(60000)       # more than balance

# ── Example 2: Bob's account ─────────────────────────────────────────────────
print("\n--- Bob's Account ---")
bob = Bank(500)
print("Balance:", bob.get_balance())
bob.withdraw(300)
bob.diposit(2000)
print("After deposit 2000:", bob.get_balance())
bob.withdraw(1000)
print("Final balance:", bob.get_balance())

# ── Example 3: Transfer between two accounts ─────────────────────────────────
print("\n--- Transfer: Carol -> Dave ---")
carol = Bank(30000)
dave = Bank(5000)

transfer_amount = 10000
print(f"Carol before: {carol.get_balance()}, Dave before: {dave.get_balance()}")
if carol.get_balance() >= transfer_amount:
    carol.balance -= transfer_amount
    dave.diposit(transfer_amount)
print(f"Carol after:  {carol.get_balance()}, Dave after:  {dave.get_balance()}")
