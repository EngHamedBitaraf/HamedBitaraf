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
        ///function get getparent . get childeren
            function getChilderen(array){
                //console.log(array)
                Datamanager.getChildren(array);
            }
            function getParent(str){
                Datamanager.getparent(str);
            }

        ///get path json file  set  property  string hello
        property  var valueJson: Datamanager.getjson()
        property string backgrand: Datamanager.getBackgrand()
        property string backdigram: Datamanager.getBackdigram()
        property int font: Datamanager.getfont()

    }
    ///end
    ///create web view for dispalay file html in widget
    Rectangle{
        anchors.fill: parent
        color: "black"
        WebEngineView{
            id:webEngine
            anchors.fill:parent
               url: Datamanager.htmlURL()
            webChannel: webChanel


        }
    }
    ///end
    //use mainqml and datamanager in htmlfile to use qwebchanel.js
    Component.onCompleted: {
        webChanel.registerObject("foo",myobject)
        webChanel.registerObject("bar",Datamanager)
    }


}
