import bb.cascades 1.0
import QtQuick 1.0
import mvvm.viewmodels 1.0

Page {
    titleBar: TitleBar {
        title: qsTr("MVVM Login Example")
    }

    Container {
        topPadding: 50
        leftPadding: 10
        rightPadding: 10
        layout: StackLayout {
        }

        // Bind this label to the message property of the LoginViewModel.
        Label {
            text: loginVM.message
        }

        // Bind this TextField to the username property of the LoginViewModel.
        TextField {
            id: txtUsername
            text: loginVM.username
            hintText: qsTr("Username")
        }

        // Bind this TextField to the password property of the LoginViewModel.
        TextField {
            id: txtPassword
            text: loginVM.password
            hintText: qsTr("Password")
            inputMode: TextFieldInputMode.Password
        }

        Button {
            text: qsTr("Login")
            horizontalAlignment: HorizontalAlignment.Center
            imageSource: "asset:///images/lock.png"
            // When the button is clicked, invoke the login method of the viewmodel.
            onClicked: loginVM.login()
        }
    }

    attachedObjects: [
        // Instantiate the LoginViewModel and give it a unique id
        LoginViewModel {
            id: loginVM
        },
        // Bind the property username of the loginViewModel to the text of the txtUsername TextField.
        Binding {
            target: loginVM
            value: txtUsername.text
            property: "username"
        },
        // Bind the property password of the loginViewModel to the text of the txtPassword TextField.
        Binding {
            target: loginVM
            value: txtPassword.text
            property: "password"
        }
    ]
}
