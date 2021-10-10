from cv2 import cv2
cap = cv2.VideoCapture(0, cv2.CAP_DSHOW)
# link of pretrained model https://github.com/opencv/opencv/blob/master/data/haarcascades/haarcascade_frontalface_default.xml


detector = cv2.CascadeClassifier(
    "haarcascade_frontalface_default.xml")

while True:

    ret, img = cap.read()

    if ret:

        gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)

        faces = detector.detectMultiScale(gray, 1.1, 4)

        for face in faces:
            x, y, w, h = face
            if face.any():
                cv2.rectangle(img, (x, y), (x+w, y+h), (255, 0, 0), 2)

        cv2.imshow("Face", img)

    key = cv2.waitKey(1)

    if key == ord("q"):
        break

cap.release()
cv2.destroyAllWindows()
