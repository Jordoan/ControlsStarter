import time

while(True):
        f = open("cmake-build-debug/CAN.csv");
        print(f.read());
        f.close();
        time.sleep(1);