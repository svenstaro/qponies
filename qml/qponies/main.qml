import QtQuick 1.0

Rectangle {
    width: animation.width; height: animation.height + 8
    color: "#00000000"
    id: window

    AnimatedImage { id: animation; source: "/rbd" }

    //Rectangle {
    //    property int frames: animation.frameCount
//
    //    width: 4; height: 8
    //    x: (animation.width - width) * animation.currentFrame / frames
    //    y: animation.height
    //    color: "red"
    //}
}
