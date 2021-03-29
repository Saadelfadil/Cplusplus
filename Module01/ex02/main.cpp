# include "Zombie.hpp"
# include "ZombieEvent.hpp"

int	main(void)
{
	int	i;
	Zombie handsome_zombie("Leo", "Alive");

	handsome_zombie.advert();

	ZombieEvent random_zombie("Dead");

	Zombie *bad_zombie_event = random_zombie.newZombie("Baruto");
	Zombie *good_zombie_event = random_zombie.newZombie("Naruto");

	bad_zombie_event->advert();
	good_zombie_event->advert();

	i = -1;
	while (++i < 5)
		random_zombie.randomChump();

	delete bad_zombie_event;
	delete good_zombie_event;
}