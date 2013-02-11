import bb.cascades 1.0
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
            onTextChanged: {
                // When the text is changed, update the viewmodel with the new username
                loginVM.username = txtUsername.text
            }
        }

        // Bind this TextField to the password property of the LoginViewModel.
        TextField {
            id: txtPassword
            text: loginVM.password
            hintText: qsTr("Password")
            inputMode: TextFieldInputMode.Password
            onTextChanged: {
                // When the text is changed, update the viewmodel with the new password
                loginVM.password = txtPassword.text
            }
        }

        Button {
            text: qsTr("Login")
            horizontalAlignment: HorizontalAlignment.Center
            imageSource: "asset:///images/lock.png"
            onClicked: {
                // When the button is clicked, invoke the login method of the viewmodel.
                loginVM.login();
            }
        }
    }

    attachedObjects: [
        // Instantiate the LoginViewModel and give it a unique id
        LoginViewModel {
            id: loginVM
        }
    ]
}
