import cv2
cam = cv2.VideoCapture(0)

while True:
    _, fram = cam.read()
    cv2.imshow("My Cam", fram)
    cv2.waitKey(1)