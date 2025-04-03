import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15

Page {
    id: rulesScreen

    // Signal pour retourner à l'écran d'accueil
    signal backClicked()

    background: Rectangle {
        color: "#f0f0f0"
    }

    ColumnLayout {
        anchors.fill: parent
        anchors.margins: 20
        spacing: 15

        // En-tête
        RowLayout {
            Layout.fillWidth: true

            Button {
                text: qsTr("Retour")
                onClicked: backClicked()
            }

            Label {
                text: qsTr("RÈGLES DU JEU")
                font.pixelSize: 24
                font.bold: true
                color: "#34495e"
                Layout.alignment: Qt.AlignHCenter
                Layout.fillWidth: true
            }
        }

        // Contenu des règles
        ScrollView {
            Layout.fillWidth: true
            Layout.fillHeight: true
            clip: true

            ColumnLayout {
                width: parent.width
                spacing: 15

                Label {
                    text: qsTr("Bienvenue dans le jeu Motus !")
                    font.pixelSize: 18
                    font.bold: true
                    Layout.fillWidth: true
                }

                Label {
                    text: qsTr("Objectif du jeu")
                    font.pixelSize: 16
                    font.bold: true
                    Layout.fillWidth: true
                }

                Label {
                    text: qsTr("Le but du jeu est de deviner un mot de 6 lettres en un nombre limité de tentatives. La première lettre du mot vous est donnée comme indice de départ.")
                    font.pixelSize: 14
                    wrapMode: Text.WordWrap
                    Layout.fillWidth: true
                }

                Label {
                    text: qsTr("Comment jouer")
                    font.pixelSize: 16
                    font.bold: true
                    Layout.fillWidth: true
                }

                Label {
                    text: qsTr("1. À chaque tour, proposez un mot de 6 lettres commençant par la lettre indiquée.\n\n2. Après chaque proposition, le jeu vous donne des indices :\n   - Case verte : lettre correcte et bien placée\n   - Case orange : lettre présente dans le mot mais mal placée\n   - Case grise : lettre absente du mot\n\n3. Utilisez ces indices pour affiner vos propositions et trouver le mot caché.\n\n4. Vous disposez de 6 tentatives pour trouver le mot.\n\n5. Le chronomètre démarre dès le début de la partie.")
                    font.pixelSize: 14
                    wrapMode: Text.WordWrap
                    Layout.fillWidth: true
                    lineHeight: 1.2
                }

                Label {
                    text: qsTr("Conseils")
                    font.pixelSize: 16
                    font.bold: true
                    Layout.fillWidth: true
                }

                Label {
                    text: qsTr("- Utilisez des mots qui existent dans le dictionnaire français.\n- Analysez bien les indices pour éliminer les lettres incorrectes.\n- Tentez de placer les lettres marquées en orange dans d'autres positions.\n- Si vous êtes bloqué, essayez d'utiliser des lettres courantes comme E, A, S, R, T, N.")
                    font.pixelSize: 14
                    wrapMode: Text.WordWrap
                    Layout.fillWidth: true
                    lineHeight: 1.2
                }

                Label {
                    text: qsTr("Bonne chance !")
                    font.pixelSize: 18
                    font.bold: true
                    Layout.alignment: Qt.AlignHCenter
                    Layout.topMargin: 20
                }
            }
        }
    }
}
