#ifndef FUJICOIN_QT_TEST_UTIL_H
#define FUJICOIN_QT_TEST_UTIL_H

/**
 * Press "Ok" button in message box dialog.
 *
 * @param text - Optionally store dialog text.
 * @param msec - Number of miliseconds to pause before triggering the callback.
 */
void ConfirmMessage(QString* text = nullptr, int msec = 0);

#endif // FUJICOIN_QT_TEST_UTIL_H
