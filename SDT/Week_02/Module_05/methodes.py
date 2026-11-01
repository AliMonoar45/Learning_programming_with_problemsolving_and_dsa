class Phone:
    price = 10000
    color = "Blue"
    brand = "Samsung"
    features = ["dual-sim", "gorilla-glass", "108mp-camera"]

    def call(self):
        print("calling someone")

    def send_sms(self, phone, sms):
        text = f"sending sms to: {phone} and msg : {sms}"
        return text


my_phone = Phone()
print(my_phone.features)
my_phone.call()

result = my_phone.send_sms(343434, "this is a message")
print(result)

new_phone = Phone()
new_phone.price = 20000
print(my_phone.price, new_phone.price)

another_phone = Phone()
another_phone.price = 40000
print(my_phone.price, new_phone.price, another_phone.price)
