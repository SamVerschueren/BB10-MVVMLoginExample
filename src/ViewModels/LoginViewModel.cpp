/*
 * LoginViewModel.cpp
 *
 * This is the implementation of the header file of the LoginViewModel.
 *
 * Created on: 11-feb.-2013
 * Author: Sam Verschueren		<sam.verschueren@gmail.com>
 */
#include "LoginViewModel.hpp"

/**
 * Returns the message that is holded by the viewmodel.
 *
 * @return The message
 */
QString LoginViewModel::getMessage() {
	return this->message;
}

/**
 * Sets the message to the value provided. If the new message is something
 * other then the previous message, the message will be updated and the
 * view will be notified by the messageChanged signal.
 *
 * @param message The message to be set.
 */
void LoginViewModel::setMessage(QString message) {
	if(this->message != message) {
		this->message = message;

		emit messageChanged(message);
	}
}

/**
 * Returns the username that is holded by the viewmodel.
 *
 * @return The username
 */
QString LoginViewModel::getUsername() {
	return this->username;
}

/**
 * Sets the username to the value provided. If the new username is something
 * other then the previous username, the username will be updated and the
 * view will be notified by the usernameChanged signal.
 *
 * @param username The username to be set.
 */
void LoginViewModel::setUsername(QString username) {
	if(this->username != username) {
		this->username = username;

		emit usernameChanged(username);
	}
}

/**
 * Returns the password that is holded by the viewmodel.
 *
 * @return The password.
 */
QString LoginViewModel::getPassword() {
	return this->password;
}

/**
 * Sets the password to the value provided. If the new password is something
 * other then the previous password, the password will be updated and the
 * view will be notified by the passwordChanged signal.
 *
 * @param password The password to be set.
 */
void LoginViewModel::setPassword(QString password) {
	if(this->password != password) {
		this->password = password;

		emit passwordChanged(password);
	}
}

/**
 * This method checks if the username and password provided by the user
 * is correct. This method is a Q_INVOKABLE method so it can be bound to
 * the click event of a button.
 */
void LoginViewModel::login() {
	if(this->username == "Sam" && this->password == "test") {
		this->setMessage("You are succesfully logged in");
	}
	else {
		this->setMessage("Error: Something went wrong...");
	}
}
