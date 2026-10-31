import time
import pyautogui

n = int(input())

print("You have 3 seconds to switch to your target window...")
time.sleep(3)


for i in range(1,n+1):
    line="#"*i
    pyautogui.write(line,interval=0.05)
    pyautogui.press("enter")
#
##
###
####
#####
