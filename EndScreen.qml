import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15

Page {
    id: endScreen

    // Propriétés
    property bool won: false

    // Signaux
    signal playAgainClicked()
    signal backToHomeClicked()

    background: Rectangle {
        color: won ? "#e8f8f5" : "#fbe5e1"  // Vert clair si gagné, rouge clair si perdu
    }

    ColumnLayout {
        anchors.centerIn: parent
        spacing: 20
        width: parent.width * 0.7

        // Titre
        Label {
            text: won ? qsTr("FÉLICITATIONS !") : qsTr("PARTIE TERMINÉE")
            font.pixelSize: 36
            font.bold: true
            color: won ? "#27ae60" : "#e74c3c"
            Layout.alignment: Qt.AlignHCenter
        }

        // Message
        Label {
            text: won
                ? qsTr("Vous avez trouvé le mot !")
                : qsTr("Vous n'avez pas trouvé le mot. Le mot était : ") + game.currentWord
            font.pixelSize: 20
            wrapMode: Text.WordWrap
            horizontalAlignment: Text.AlignHCenter
            Layout.fillWidth: true
            Layout.alignment: Qt.AlignHCenter
        }

        // Temps
        Rectangle {
            Layout.preferredHeight: 60
            Layout.fillWidth: true
            color: "#34495e"
            radius: 5

            Label {
                anchors.centerIn: parent
                text: qsTr("Temps : ") + timer.displayTime
                font.pixelSize: 24
                color: "white"
            }
        }

        // Espace
        Item {
            Layout.preferredHeight: 20
        }

        // Boutons
        Button {
            text: qsTr("Rejouer")
            font.pixelSize: 20
            Layout.fillWidth: true
            Layout.preferredHeight: 60

            background: Rectangle {
                color: parent.down ? "#2980b9" : "#3498db"
                radius: 5
            }

            contentItem: Text {
                text: parent.text
                font: parent.font
                color: "white"
                horizontalAlignment: Text.AlignHCenter
                verticalAlignment: Text.AlignVCenter
            }

            onClicked: {
                playAgainClicked()
            }
        }

        Button {
            text: qsTr("Retour à l'accueil")
            font.pixelSize: 20
            Layout.fillWidth: true
            Layout.preferredHeight: 60

            background: Rectangle {
                color: parent.down ? "#7f8c8d" : "#95a5a6"
                radius: 5
            }

            contentItem: Text {
                text: parent.text
                font: parent.font
                color: "white"
                horizontalAlignment: Text.AlignHCenter
                verticalAlignment: Text.AlignVCenter
            }

            onClicked: {
                backToHomeClicked()
            }
        }
    }
}
