
from yolo import YOLO
from yolo import detect_video



if __name__ == '__main__':
    video = raw_input('input the video name    ')
    video_path='/home/mechrevo/Documents/attempt4/keras-yolov3/' + video
    detect_video(YOLO(), video_path)
