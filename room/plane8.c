inherit "/lib/room";

void create_room() {
    set_lumens(1);

    set_brief("A large open plain");

    set_description(
	"A large open plain."
      );

    set_exits( ([
	"north": "/room/plane13"
	, "west": "/room/plane6"
	, "south": "/room/ruin"
      ]) );
}
