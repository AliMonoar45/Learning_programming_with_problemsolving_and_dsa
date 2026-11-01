class Phone:
    manufactured = 'China'
    def __init__(self,owner,brand,price):
        self.owner = owner
        self.brand = brand
        self.price = price

    def send_sms(self,phone,sms):
        text = f'sending to {phone} message : {sms}'
        print(text)




my_phone = Phone('Sabbir', 'Samsung', 1200)
print(my_phone.owner,my_phone.brand,my_phone.price)


her_phone = Phone('She', 'Iphone', 120000)
print(her_phone.owner, her_phone.brand, her_phone.price)
my_phone.send_sms("01777777777", "Hi Sabbir")





