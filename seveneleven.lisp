(defun solve ()
  (declare (optimize (speed 3) (space 0) (debug 0)))
  (block solved
    (dotimes (a 711)
      (dotimes (b 711)
	(dotimes (c 711)
	  (dotimes (d 711)
 	    (when (and (= (+ a b c d) 711)
		       (= (* a b c d) (* 711 100 100 100)))
	      (return-from solved (values a b c d)))))))))


