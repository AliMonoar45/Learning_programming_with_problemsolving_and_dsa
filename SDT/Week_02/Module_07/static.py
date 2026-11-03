# static attribute (class attribute)
# static methode @staticmethode
# class methode @classmethode
# difference between static methode and class methode
class Shopping:
    cart = [] # class attribute or static attribute
    origin = 'china'

    def __init__(self,name,location):
        self.name = 'jomuna' # instance attribute
        self.location = 'jam ache'

    def purchase(self, amount,price,item):
        remaining = amount - price

        print(f'buying {item} for amount {amount}, price {price}, rem : {remaining}')
    @classmethod
    def hudai_dekhi(self,item):
        print(f'hudai dekhi kinbo na', item)

    @staticmethod
    def multiply(a,b):
        res =  a*b
        print(res)

# Shopping.purchase(2,3,4)
basundhara = Shopping('basu','dhaka')

# basundhara.purchase(50,35,'lungi')

# basundhara.hudai_dekhi('lungi')


Shopping.hudai_dekhi('lungi')  # class mwthode
Shopping.multiply(3,5) # staticmethod