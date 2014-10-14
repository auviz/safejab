//
//  Strings.h
//  Off the Record
//
//  Created by Chris Ballinger on 4/7/12.
//  Copyright (c) 2012 Chris Ballinger. All rights reserved.
//
//  This file is part of ChatSecure.
//
//  ChatSecure is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  ChatSecure is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with ChatSecure.  If not, see <http://www.gnu.org/licenses/>.

//NSString *returnStr(NSString *str, NSString *comment){
    
    //NSString *lament = @"Why";
    
    /// NSLog(lament);
    
    
//    return @"test";
//}

 //NSString *lament = @"Why";



#define BUDDY_LIST_STRING returnStr(@"Контакты", @"Title for the buddy list tab")
#define CONVERSATIONS_STRING returnStr(@"Conversations", @"Title for the conversations tab")
#define ACCOUNTS_STRING returnStr(@"Accounts", @"Title for the accounts tab")
#define ABOUT_STRING returnStr(@"About", @"Title for the about page")
#define CHAT_STRING returnStr(@"Chat", @"Title for chat view")
#define CANCEL_STRING returnStr(@"Cancel", @"Cancel an alert window")
#define INITIATE_ENCRYPTED_CHAT_STRING returnStr(@"Initiate Encrypted Chat", @"Shown when starting an encrypted chat session")
#define CANCEL_ENCRYPTED_CHAT_STRING returnStr(@"Cancel Encrypted Chat", @"Shown when ending an encrypted chat session")
#define VERIFY_STRING returnStr(@"Verify", @"Shown when verifying fingerprints")
#define CLEAR_CHAT_HISTORY_STRING returnStr(@"Clear Chat History", @"String shown in dialog for removing chat history")
#define SEND_STRING returnStr(@"Send", @"For sending a message")
#define OK_STRING returnStr(@"OK", @"Accept the dialog")
#define RECENT_STRING returnStr(@"Недавние", @"Title for header of Buddy list view with Recent Buddies")

// Used in OTRChatViewController
#define YOUR_FINGERPRINT_STRING returnStr(@"Fingerprint for you", @"your fingerprint")
#define THEIR_FINGERPRINT_STRING returnStr(@"Purported fingerprint for", @"the alleged fingerprint of their other person")
#define SECURE_CONVERSATION_STRING returnStr(@"You must be in a secure conversation first.", @"Inform user that they must be secure their conversation before doing that action")
#define VERIFY_FINGERPRINT_STRING returnStr(@"Verify Fingerprint", @"Title of the dialog for fingerprint verification")
#define CHAT_INSTRUCTIONS_LABEL_STRING returnStr(@"Log in on the Settings page (found on top right corner of buddy list) and then select a buddy from the Buddy List to start chatting.", @"Instructions on how to start using the program")
#define OPEN_IN_SAFARI_STRING returnStr(@"Open in Safari", @"Shown when trying to open a link, asking if they want to switch to Safari to view it")
#define DISCONNECTED_TITLE_STRING returnStr(@"Disconnected", @"Title of alert when user is disconnected from protocol")
#define DISCONNECTED_MESSAGE_STRING returnStr(@"You (%@) have disconnected.", @"Message shown when user is disconnected")
#define DISCONNECTION_WARNING_STRING returnStr(@"When you leave this conversation it will be deleted forever.", @"Warn user that conversation will be deleted after leaving it")
#define CONVERSATION_NOT_SECURE_WARNING_STRING returnStr(@"Warning: This chat is not encrypted", @"Warn user that the current chat is not secure")
#define CONVERSATION_NO_LONGER_SECURE_STRING returnStr(@"The conversation with %@ is no longer secure.", @"Warn user that the current chat is no longer secure")
#define CONVERSATION_SECURE_WARNING_STRING returnStr(@"This chat is secured",@"Warns user that the current chat is secure")
#define CONVERSATION_SECURE_AND_VERIFIED_WARNING_STRING returnStr(@"This chat is secured and verified",@"Warns user that the current chat is secure and verified")

#define CHAT_STATE_ACTIVE_STRING returnStr(@"Active",@"String to be displayed when a buddy is Active")
#define CHAT_STATE_COMPOSING_STRING returnStr(@"Typing",@"String to be displayed when a buddy is currently composing a message")
#define CHAT_STATE_PAUSED_STRING returnStr(@"Entered Text",@"String to be displayed when a buddy has stopped composing and text has been entered")
#define CHAT_STATE_INACTVIE_STRING returnStr(@"Inactive",@"String to be displayed when a budy has become inactive")
#define CHAT_STATE_GONE_STRING returnStr(@"Gone",@"String to be displayed when a buddy is inactive for an extended period of time")

// OTRBuddyListViewController
#define IGNORE_STRING returnStr(@"Ignore", @"Ignore an incoming message")
#define REPLY_STRING returnStr(@"Reply", @"Reply to an incoming message")
#define OFFLINE_STRING returnStr(@"Offline", @"Label in buddylist for users that are offline")
#define AWAY_STRING returnStr(@"Away", @"Label in buddylist for users that are away")
#define AVAILABLE_STRING returnStr(@"Available", @"Label in buddylist for users that are available")
#define OFFLINE_MESSAGE_STRING returnStr(@"is now offline", @"Message shown inline for users that are offline")
#define AWAY_MESSAGE_STRING returnStr(@"is now away", @"Message shown inline for users that are away")
#define AVAILABLE_MESSAGE_STRING returnStr(@"is now available", @"Message shown inline for users that are available")
#define SECURITY_WARNING_STRING returnStr(@"Security Warning", @"Title of alert box warning about security issues")
#define AGREE_STRING returnStr(@"Agree", @"Agree to EULA")
#define DISAGREE_STRING returnStr(@"Disagree",@"Disagree with EULA")
#define EULA_WARNING_STRING returnStr(@"If you require true security, meet in person. This software, its dependencies, or the underlying OTR protocol could contain security issues. The full source code is available on Github but has not yet been audited by an independent security expert. Use at your own risk.", @"Text describing possible security risks")
#define EULA_BSD_STRING @"Modified BSD License:\nTHIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS \"AS IS\" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."

// OTRLoginViewController
#define ERROR_STRING returnStr(@"Error!", @"Title of error message popup box")
#define OSCAR_FAIL_STRING returnStr(@"Failed to start authenticating. Please try again.", @"Authentication failed, tell user to try again")
#define XMPP_FAIL_STRING returnStr(@"Failed to connect to XMPP server. Please check your login credentials and internet connection and try again.", @"Message when cannot connect to XMPP server")
#define XMPP_PORT_FAIL_STRING returnStr(@"Domain needs to be set manually when specifying a custom port", @"Message when port is changed but domain not set")
#define LOGGING_IN_STRING returnStr(@"Logging in...", @"shown during the login proceess")
#define USER_PASS_BLANK_STRING returnStr(@"You must enter a username and a password to login.", @"error message shown when user doesnt fill in a username or password")
#define BASIC_STRING returnStr(@"Basic", @"string to describe basic set of settings")
#define ADVANCED_STRING returnStr(@"Advanced", @"stirng to describe advanced set of settings")
#define SSL_MISMATCH_STRING returnStr(@"SSL Hostname Mismatch",@"stirng for settings to allow ssl mismatch")
#define SELF_SIGNED_SSL_STRING returnStr(@"Self Signed SSL",@"string for settings to allow self signed ssl stirng")
#define PORT_STRING returnStr(@"Port", @"Label for port number field for connecting to service")
#define GOOGLE_TALK_EXAMPLE_STRING returnStr(@"user@gmail.com", @"example of a google talk account");
#define REQUIRED_STRING returnStr(@"Required",@"String to let user know a certain field like a password is required to create an account")
#define SEND_DELIVERY_RECEIPT_STRING returnStr(@"Send Delivery Receipts",@"String in login settings asking to send delivery receipts")
#define SEND_TYPING_NOTIFICATION_STRING returnStr(@"Send Typing Notificaction",@"Stirng in login settings asking to send typing notification")

// OTRAccountsViewController
#define LOGOUT_STRING returnStr(@"Log Out", @"log out from account")
#define LOGIN_STRING returnStr(@"Log In", @"log in to account")
#define LOGOUT_FROM_AIM_STRING returnStr(@"Logout from AIM?", "Ask user if they want to logout of AIM")
#define LOGOUT_FROM_XMPP_STRING returnStr(@"Logout from XMPP?", "ask user if they want to log out of xmpp")
#define DELETE_ACCOUNT_TITLE_STRING returnStr(@"Delete Account?", @"Ask user if they want to delete the stored account information")
#define DELETE_ACCOUNT_MESSAGE_STRING returnStr(@"Permanently delete", @"Ask user if they want to delete the stored account information")
#define NO_ACCOUNT_SAVED_STRING returnStr (@"No Saved Accounts", @"Message infomring user that there are no accounts currently saved")

// OTRAboutViewController
#define ATTRIBUTION_STRING returnStr(@"ChatSecure is brought to you by many open source projects", @"for attribution of other projects")
#define SOURCE_STRING returnStr(@"Check out the source here on Github", @"let users know source is on Github")
#define CONTRIBUTE_TRANSLATION_STRING returnStr(@"Contribute a translation", @"label for a link to contribute a new translation")
#define PROJECT_HOMEPAGE_STRING returnStr(@"Project Homepage", @"label for link to ChatSecure project website")
#define VERSION_STRING returnStr(@"Version", @"when displaying version numbers such as 1.0.0")

// OTRLoginViewController
#define USERNAME_STRING returnStr(@"Username", @"Label text for username field on login screen")
#define PASSWORD_STRING returnStr(@"Password", @"Label text for password field on login screen")
#define DOMAIN_STRING returnStr(@"Domain", @"Label text for domain field on login scree")
#define LOGIN_TO_STRING returnStr(@"Login to", @"Label for button describing which protocol you're logging into, will be followed by a protocol such as XMPP or AIM during layout")
#define REMEMBER_USERNAME_STRING returnStr(@"Remember username", @"label for switch for whether or not we should save their username between launches")
#define REMEMBER_PASSWORD_STRING returnStr(@"Remember password", @"label for switch for whether or not we should save their password between launches")
#define OPTIONAL_STRING returnStr(@"Optional", @"Hint text for domain field telling user this field is not required")
#define FACEBOOK_HELP_STRING returnStr( @"Your Facebook username is not the email address that you use to login to Facebook",@"Text that makes it clear which username to use")


// OTRSettingsManager
#define CRITTERCISM_TITLE_STRING returnStr(@"Send Crash Reports", @"Title for crash reports settings switch")
#define CRITTERCISM_DESCRIPTION_STRING returnStr(@"Automatically send anonymous crash logs (opt-in)", @"Description for crash reports settings switch")
#define OTHER_STRING returnStr(@"Other", @"Title for other miscellaneous settings group")
#define ALLOW_SELF_SIGNED_CERTIFICATES_STRING returnStr(@"Self-Signed SSL", @"Title for settings cell on whether or not the XMPP library should allow self-signed SSL certificates")
#define ALLOW_SSL_HOSTNAME_MISMATCH_STRING returnStr(@"Hostname Mismatch", @"Title for settings cell on whether or not the XMPP library should allow SSL hostname mismatch")
#define SECURITY_WARNING_DESCRIPTION_STRING returnStr(@"Warning: Use with caution! This may reduce your security.", @"Cell description text that warns users that enabling that option may reduce their security.")
#define DELETE_CONVERSATIONS_ON_DISCONNECT_TITLE_STRING returnStr(@"Auto-delete", @"Title for automatic conversation deletion setting")
#define DELETE_CONVERSATIONS_ON_DISCONNECT_DESCRIPTION_STRING returnStr(@"Delete chats on disconnect", @"Description for automatic conversation deletion")
#define FONT_SIZE_STRING returnStr(@"Font Size", @"Size for the font in the chat screen")
#define FONT_SIZE_DESCRIPTION_STRING returnStr(@"Size for font in chat view", @"description for what the font size setting affects")
#define DISCONNECTION_WARNING_TITLE_STRING returnStr(@"Signout Warning", @"Title for setting about showing a warning before disconnection")
#define DISCONNECTION_WARNING_DESC_STRING returnStr(@"1 Minute Alert Before Disconnection", @"Description for disconnection warning setting")


// OTRSettingsViewController
#define SETTINGS_STRING returnStr(@"Settings", @"Title for the Settings screen")
#define SHARE_STRING returnStr(@"Share", @"Title for sharing a link to the app")
#define NOT_AVAILABLE_STRING returnStr(@"Not Available", @"Shown when a feature is not available, for example SMS")
#define SHARE_MESSAGE_STRING returnStr(@"Chat with me securely", @"Body of SMS or email when sharing a link to the app")
#define CONNECTED_STRING returnStr(@"Connected", @"Whether or not account is logged in")

#define SEND_FEEDBACK_STRING returnStr(@"Send Feedback", @"String on button to email feedback")

// OTRSettingsDetailViewController
#define SAVE_STRING returnStr(@"Save", @"Title for button for saving a setting")
// OTRDoubleSettingViewController
#define NEW_STRING returnStr(@"New", @"For a new settings value")
#define OLD_STRING returnStr(@"Old", @"For an old settings value")

// OTRQRCodeViewController
#define DONE_STRING returnStr(@"Done", @"Title for button to press when user is finished")
#define QR_CODE_INSTRUCTIONS_STRING returnStr(@"This QR Code contains a link to http://omniqrcode.com/q/chatsecure and will redirect to the App Store.", @"Instructions label text underneath QR code")

// OTRAppDelegate
#define EXPIRATION_STRING returnStr(@"Background session will expire in one minute.", @"Message displayed in Notification Manager when session will expire in one minute")
#define READ_STRING returnStr(@"Read", @"Title for action button on alert dialog, used as a verb in the present tense")

// OTRNewAccountViewControler
#define NEW_ACCOUNT_STRING returnStr(@"Add SJ account", @"Title for New Account View")

//OTRAccount
#define AIM_STRING returnStr(@"AOL Instant Messenger", @"the name for AIM")
#define GOOGLE_TALK_STRING returnStr(@"Google Talk", @"the name for google talk")
#define FACEBOOK_STRING returnStr(@"Facebook",@"the name for facebook")
#define JABBER_STRING returnStr(@"Jabber (XMPP)",@"the name for jabber, also include (XMPP) at the end")


