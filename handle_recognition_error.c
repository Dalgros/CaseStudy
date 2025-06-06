void log_error(const char* message);
void report_to_gateway(const char* message);

void handle_recognition_error(const char* sign_data) {
    log_error(sign_data);
    report_to_gateway("Sign recognition failed");
}
