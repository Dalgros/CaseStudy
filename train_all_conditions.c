typedef enum {SUNNY, RAINY, FOGGY, NIGHT} WeatherCondition;

void train_on_dataset(WeatherCondition condition);

void train_all_conditions() {
    train_on_dataset(SUNNY);
    train_on_dataset(RAINY);
    train_on_dataset(FOGGY);
    train_on_dataset(NIGHT);
}
