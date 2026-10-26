import time
import pyautogui

# Give yourself 3 seconds to click into Notepad or any text area
print("You have 3 seconds to switch to your target window...")
time.sleep(3)

# interval=0.25 types each letter every quarter of a second
for i in range(0,100):
    pyautogui.write("Hello Queen", interval=0.25)
    pyautogui.press('enter')
