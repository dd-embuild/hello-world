#include <iostream>

class Entity {
  private:
    int health;
    const char *name;
    void AdjustHealth(int delta);
    void ShowHealth(void);
  public:
    Entity(const char *name);
    void AddHealth(int delta);
    void AddDamage(int delta);
};

Entity::Entity(const char *name="anon")
{
    this->name = name;
    this->health = 10;
    this->ShowHealth();
}

void Entity::ShowHealth(void)
{
    std::cout << this->name << "'s health is " << this->health << "\n";
}

void Entity::AdjustHealth(int delta)
{
    this->health += delta;
    this->ShowHealth();
}

void Entity::AddDamage(int delta)
{
    this->AdjustHealth(-1 * delta);
}

void Entity::AddHealth(int delta)
{
    this->AdjustHealth(delta);   
}

int main(void)
{
    Entity joe();
    std::cout << "Hello, world!\n";
}
