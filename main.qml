import QtQuick 2.13
import QtQuick.Window 2.13
import QtWebView 1.1
import QtWebEngine 1.8
import QtWebChannel 1.0
///main qml
Item {
    anchors.fill: parent
    WebChannel{
        id : webChanel
    }
    /// creat object for use as data class datamanager
    QtObject{
        id:myobject
        objectName: "myobjrct"
//        property var send: function(arg) {
//            sendTextMessage(arg);
//        }
//        signal someSignal(string message);

        function someMetod(){

            return valueJson;
        }
        ///get path json file  set  property  string hello
        property  var valueJson: datamanager.readjson()

        property string filedata: datamanager.getdata()
        property string backgrand: datamanager.getBackgrand()
        property string backdigram: datamanager.getBackdigram()
    }
    ///end
    ///create web view for dispalay file html in widget
    Rectangle{
        anchors.fill: parent
        color: "black"
        WebEngineView{
            id:webEngine
            anchors.fill:parent
               url: datamanager.htmlURL()
            webChannel: webChanel


        }
    }
    ///end
    //use mainqml and datamanager in htmlfile to use qwebchanel.js
    Component.onCompleted: {
        webChanel.registerObject("foo",myobject)
        webChanel.registerObject("bar",datamanager)
    }


}
